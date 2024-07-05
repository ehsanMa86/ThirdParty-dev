/*****************************************************************************
 * CVS File Information :
 *    $RCSfile$
 *    Author: patmiller $
 *    Date: 2007/06/11 14:12:53 $
 *    Revision: 1.2 $
 ****************************************************************************/
/***********************************************************************************************/
/* FILE  **************************      PMPI_Issend.c         *********************************/
/***********************************************************************************************/
/* Author : Lisa Alano July 15 2002                                                            */
/* Copyright (c) 2002 University of California Regents                                         */
/***********************************************************************************************/

#include <string.h>
#include "mpi.h"

/*=============================================================================================*/
/* Same behavior as PMPI_Irsend.c */
int PMPI_Issend (void* message, int count, MPI_Datatype datatype, int dest,
        int tag, MPI_Comm comm, MPI_Request* request) {
  return PMPI_Isend(message,count,datatype,dest,tag,comm,request);
}
