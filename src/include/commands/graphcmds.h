/*
 * graphcmds.h
 *	  prototypes for graphcmds.c
 *
 * Copyright (c) 2016 by Bitnine Global, Inc.
 *
 * src/include/commands/graphcmds.h
 */
#ifndef GRAPHCMDS_H
#define GRAPHCMDS_H

#include "nodes/params.h"
#include "nodes/parsenodes.h"

extern void CreateGraphCommand(CreateGraphStmt *graphStmt,
							   const char *queryString);
extern void RemoveGraphById(Oid graphid);
extern ObjectAddress RenameGraph(const char *oldname, const char *newname);

extern void CreateLabelCommand(CreateLabelStmt *labelStmt,
							   const char *queryString, ParamListInfo params);
extern ObjectAddress RenameLabel(RenameStmt *stmt);
extern void CheckLabelType(ObjectType type, Oid laboid, const char *command);
extern void CheckInheritLabel(CreateStmt *stmt);

extern bool RangeVarIsLabel(RangeVar *rel);

extern void CreateConstraintCommand(CreateConstraintStmt *constraintStmt,
									const char *queryString,
									ParamListInfo params);
extern void DropConstraintCommand(DropConstraintStmt *constraintStmt,
								  const char *queryString,
								  ParamListInfo params);

extern Oid DisableIndexCommand(DisableIndexStmt *disableStmt);

#endif	/* GRAPHCMDS_H */
