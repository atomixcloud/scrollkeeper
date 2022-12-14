/* copyright (C) 2001 Sun Microsystems, Inc. and Dan Mueth */

/*
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef SCROLLKEEPER_H
#define SCROLLKEEPER_H

#include <libxml/tree.h>
#include <sys/types.h>

#define _(String) gettext (String)

/*
 *
 * Paths
 *
 */
#define SCROLLKEEPERLOGFILE "/gnome/head/INSTALL/var/log/scrollkeeper.log"
#define SCROLLKEEPERLOGFILE_ROT "/gnome/head/INSTALL/var/log/scrollkeeper.log.1"
#define SCROLLKEEPER_OMF_DTD "/gnome/head/INSTALL/share/xml/scrollkeeper/dtds/scrollkeeper-omf.dtd"
#define PATHLEN		256

/*
 *
 * SKOUT: ScrollKeeper output to STDOUT and log file.
 *
 *      Each can be quiet, default, verbose, or debug.
 *
 */
#define SKOUT_STD_DEBUG         1
#define SKOUT_STD_DEFAULT       2
#define SKOUT_STD_VERBOSE       3
#define SKOUT_STD_QUIET         4
#define SKOUT_LOG_DEBUG         16
#define SKOUT_LOG_DEFAULT       32
#define SKOUT_LOG_VERBOSE       64
#define SKOUT_LOG_QUIET         128

#define SKOUT_QUIET     1       /* Output all messages                          */
#define SKOUT_DEFAULT   2       /* Output DEFAULT, VERBSE, and DEBUG messages   */
#define SKOUT_VERBOSE   3       /* Output VERBOSE and DEBUG messages            */
#define SKOUT_DEBUG     4       /* Output DEBUG messages                        */

/*
 *
 * Functions.
 *
 */
extern int sk_mkdir_with_parents(char *, mode_t, char);
extern void sk_warning(int, char *, char *, ...);
extern void sk_message(char, int, int, char *, char *, ...);
extern void sk_dtd_validation_message(char *, char *, ...);
extern void check_ptr(void *, char *);
extern char **sk_get_language_list(void);
extern int is_file(char *);
extern int is_dir(char *);
extern int apply_stylesheets(char *, char *, int, char **, char **, char);
extern int copy_file(char *, char *);
extern int install(char *, char *, char *, char);
extern int create_database_directory(char *, char *, char);
extern void uninstall(char *, char *, char);
extern xmlDocPtr merge_locale_trees(char *, char *, char *);
extern int update_doc_url_in_omf_file(char *, char *, char *);

#endif /* SCROLLKEEPER_H */
