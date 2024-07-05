/*****************************************************************************
 * CVS File Information :
 *    $RCSfile$
 *    Author: patmiller $
 *    Date: 2007/06/11 14:12:53 $
 *    Revision: 1.2 $
 ****************************************************************************/
/***********************************************************************************************/
/* FILE  **************************      PMPI_Rsend.c        ***********************************/
/***********************************************************************************************/
/* Author : Lisa Alano July 12 2002                                                            */
/* Copyright (c) 2002 University of California Regents                                         */
/***********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mpi.h"

int PMPI_Rsend (void* message, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm) {
  return PMPI_Send(message,count,datatype,dest,tag,comm);
}
