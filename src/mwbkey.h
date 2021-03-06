#ifndef _MWBKEY_HEADER

#define _MWBKEY_HEADER

#define MWBKEY_NOT_FOUND	-1
#define MWBKEY_AUTOINCREMENT	  0
#define MWBKEY_AVGROWLENGTH	  1
#define MWBKEY_CHARACTERSETNAME	  2
#define MWBKEY_CHECKSUM	  3
#define MWBKEY_COLLATIONNAME	  4
#define MWBKEY_COLUMNLENGTH	  5
#define MWBKEY_COLUMNS	  6
#define MWBKEY_COMMENT	  7
#define MWBKEY_COMMENTEDOUT	  8
#define MWBKEY_CONNECTIONSTRING	  9
#define MWBKEY_CREATEDATE	 10
#define MWBKEY_DATATYPEEXPLICITPARAMS	 11
#define MWBKEY_DEFAULTCHARACTERSETNAME	 12
#define MWBKEY_DEFAULTCOLLATIONNAME	 13
#define MWBKEY_DEFAULTVALUE	 14
#define MWBKEY_DEFAULTVALUEISNULL	 15
#define MWBKEY_DEFERABILITY	 16
#define MWBKEY_DELAYKEYWRITE	 17
#define MWBKEY_DELETERULE	 18
#define MWBKEY_DESCEND	 19
#define MWBKEY_FOREIGNKEY	 20
#define MWBKEY_FOREIGNKEYS	 21
#define MWBKEY_INDEX	 22
#define MWBKEY_INDEXKIND	 23
#define MWBKEY_INDEXTYPE	 24
#define MWBKEY_INDICES	 25
#define MWBKEY_ISNOTNULL	 26
#define MWBKEY_ISPRIMARY	 27
#define MWBKEY_ISSTUB	 28
#define MWBKEY_ISSYSTEM	 29
#define MWBKEY_ISTEMPORARY	 30
#define MWBKEY_KEYBLOCKSIZE	 31
#define MWBKEY_LASTCHANGEDATE	 32
#define MWBKEY_LENGTH	 33
#define MWBKEY_MANDATORY	 34
#define MWBKEY_MANY	 35
#define MWBKEY_MAXROWS	 36
#define MWBKEY_MERGEINSERT	 37
#define MWBKEY_MERGEUNION	 38
#define MWBKEY_MINROWS	 39
#define MWBKEY_MODELONLY	 40
#define MWBKEY_NAME	 41
#define MWBKEY_NEXTAUTOINC	 42
#define MWBKEY_OLDNAME	 43
#define MWBKEY_OWNER	 44
#define MWBKEY_PACKKEYS	 45
#define MWBKEY_PARTITIONCOUNT	 46
#define MWBKEY_PARTITIONEXPRESSION	 47
#define MWBKEY_PARTITIONTYPE	 48
#define MWBKEY_PASSWORD	 49
#define MWBKEY_PRECISION	 50
#define MWBKEY_PRIMARYKEY	 51
#define MWBKEY_RAIDCHUNKS	 52
#define MWBKEY_RAIDCHUNKSIZE	 53
#define MWBKEY_RAIDTYPE	 54
#define MWBKEY_REFERENCEDCOLUMN	 55
#define MWBKEY_REFERENCEDCOLUMNS	 56
#define MWBKEY_REFERENCEDMANDATORY	 57
#define MWBKEY_REFERENCEDTABLE	 58
#define MWBKEY_ROWFORMAT	 59
#define MWBKEY_SCALE	 60
#define MWBKEY_SIMPLETYPE	 61
#define MWBKEY_SUBPARTITIONCOUNT	 62
#define MWBKEY_SUBPARTITIONEXPRESSION	 63
#define MWBKEY_SUBPARTITIONTYPE	 64
#define MWBKEY_TABLE	 65
#define MWBKEY_TABLEDATADIR	 66
#define MWBKEY_TABLEENGINE	 67
#define MWBKEY_TABLEINDEXDIR	 68
#define MWBKEY_TEMPORARYSCOPE	 69
#define MWBKEY_TEMP_SQL	 70
#define MWBKEY_UNIQUE	 71
#define MWBKEY_UPDATERULE	 72
#define MWBKEY_WITHPARSER	 73

#define MWBKEY_COUNT	74

extern int   mwbkey_search(char *w);
extern char *mwbkey_keyword(int code);

#endif
