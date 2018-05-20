/*-
 * See the file LICENSE for redistribution information.
 *
 * Copyright (c) 1999, 2017 Oracle and/or its affiliates.  All rights reserved.
 *
 * $Id$
 */
#include "db_config.h"
#include "db_int.h"
#pragma hdrstop
/*
 * __os_isroot --
 *	Return if user has special permissions.
 *
 * PUBLIC: int __os_isroot __P((void));
 */
int __os_isroot()
{
#ifdef HAVE_GETUID
	return (getuid() == 0);
#else
	return 0;
#endif
}
