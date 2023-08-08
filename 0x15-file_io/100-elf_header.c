#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * print_Magic - prints the magic part of an elf header info
 * @ElH: the elf header values
 *
 * Return: nothing
 */

void print_Magic(Elf64_Ehdr ElH)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < 15; i++)
	{
		printf("%2.2x ", ElH.e_ident[i]);
	}
	printf("%2.2x\n", ElH.e_ident[i]);
}

/**
 * print_Class - prints the class of the file
 * @ElH: the elf header values
 *
 * Return: nothing
 */

void print_Class(Elf64_Ehdr ElH)
{
	printf("  Class:                             ");
	if (ElH.e_ident[EI_CLASS] == ELFCLASSNONE)
	{
		printf("Invalid class\n");
	}
	else if (ElH.e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
	}
	else if (ElH.e_ident[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
	}
}

/**
 * print_Data - prints the data of the file
 * @ElH: the elf header values
 *
 * Return: nothing
 */

void print_Data(Elf64_Ehdr ElH)
{
	printf("  Data:                              ");
	if (ElH.e_ident[EI_DATA] == ELFDATANONE)
	{
		printf("none\n");
	}
	else if (ElH.e_ident[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
	}
	else if (ElH.e_ident[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
	}
}

/**
 * print_Version - prints the version of the file
 * @ElH: the elf header values
 *
 * Return: nothing
 */

void print_Version(Elf64_Ehdr ElH)
{
	printf("  Version:                           ");
	if (ElH.e_ident[EI_VERSION] == EV_CURRENT)
	{
		printf("%d (current)\n", EV_CURRENT);
	}
	else if (ElH.e_ident[EI_VERSION] == EV_NONE)
	{
		printf("%d\n", EV_NONE);
	}
}

/**
 * cntnuOSABI - continues the cses of e_type
 * @ElH: the elf header values
 *
 * Return: nothing
 */

void cntnuOSABI(Elf64_Ehdr ElH)
{
	switch (ElH.e_ident[EI_OSABI])
	{
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto\n");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		default:
			printf("<unknown: %x>\n", ElH.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * print_OSABI - prints the OS ABI identification
 * @ElH: the elf header values
 *
 * Return: nothing
 */

void print_OSABI(Elf64_Ehdr ElH)
{
	printf("  OS/ABI:                            ");
	switch (ElH.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		default:
			cntnuOSABI(ElH);
			break;
	}
}



/**
 * print_ABIVer - prints the ABI version
 * @ElH: the elf header values
 *
 * Return: nothing
 */

void print_ABIVer(Elf64_Ehdr ElH)
{
	printf("  ABI Version:                       %d\n",
		ElH.e_ident[EI_ABIVERSION]);
}

/**
 * print_Type - prints the object file type
 * @ElH: the elf header values
 *
 * Return: nothing
 */

void print_Type(Elf64_Ehdr ElH)
{
	printf("  Type:                              ");
	switch (ElH.e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			if (ElH.e_type >= ET_LOPROC)
			{
				printf("Processor Specific: (%x)\n", ElH.e_type);
			}
			else if (ElH.e_type >= ET_LOOS && ElH.e_type <= ET_HIOS)
			{
				printf("OS Specific: (%x)\n", ElH.e_type);
			}
			else
			{
				printf("<unknown>: %x", ElH.e_type);
			}
			break;
	}
}

/**
 * print_EPAdd - prints the entry point address
 * @ElH: the elf header values
 *
 * Return: nothing
 */

void print_EPAdd(Elf64_Ehdr ElH)
{
	unsigned char *p = (unsigned char *) &ElH.e_entry;
	int len, i = 0;

	printf("  Entry point address:               0x");
	len = ElH.e_ident[EI_CLASS] == ELFCLASS32 ? 3 : 7;
	if (ElH.e_ident[EI_DATA] == ELFDATA2LSB)
	{
		while (p[i] == 0)
			i++;
		printf("%x", p[i++]);
		for (; i <= len; i++)
		{
			printf("%02x", p[i]);
		}
	}
	else
	{
		i = len;
		while (p[i] == 0)
			i--;
		printf("%x", p[i--]);
		for (; i >= 0; i--)
		{
			printf("%02x", p[len]);
		}
	}
	printf("\n");
}

/**
 * main - entry point
 * @ac: the number of passed arguments
 * @av: a pointer to strings that holds the arguments
 *
 * Return: 0 on success
 */

int main(int ac, char **av)
{
	int inFile;
	int R, closed;
	Elf64_Ehdr ElH;

	if (ac != 2)
		fprintf(stderr, "Usage: cp file_from file_to\n"), exit(98);
	inFile = open(av[1], O_RDONLY);
	if (inFile == -1)
		fprintf(stderr, "Error: Can't read from file %s\n", av[1]), exit(98);
	R = read(inFile, &ElH, sizeof(Elf64_Ehdr));
	if (R == -1)
		fprintf(stderr, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (!(ElH.e_ident[0] == 0x7f && ElH.e_ident[1] == 'E' &&
		ElH.e_ident[2] == 'L' && ElH.e_ident[3] == 'F'))
	{
		fprintf(stderr, "Error: %s is not an elf file\n", av[1]);
		exit(98);
	}
	printf("ELF Header:\n");
	print_Magic(ElH);
	print_Class(ElH);
	print_Data(ElH);
	print_Version(ElH);
	print_OSABI(ElH);
	print_ABIVer(ElH);
	print_Type(ElH);
	print_EPAdd(ElH);
	closed = close(inFile);
	if (closed == -1)
		fprintf(stderr, "Error: could not close %s\n", av[1]), exit(98);
	return (0);
}
