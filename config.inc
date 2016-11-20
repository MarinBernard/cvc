#!/bin/bash
################################################################################
# Cascaded Vorbis Comments main configuration file
################################################################################

#-------------------------------------------------------------------------------
# Paths
#-------------------------------------------------------------------------------

# Path to CVC tools
CFG_CVCTools_RootPath=$(dirname "$0")
CFG_CVCTools_CVCCommit="${CFG_CVCTools_RootPath}/cvccommit"
CFG_CVCTools_CVCCreate="${CFG_CVCTools_RootPath}/cvccreate"
CFG_CVCTools_CVCExpand="${CFG_CVCTools_RootPath}/cvcexpand"


# Path to CVC templates
CFG_CVCTemplatesPath="${CFG_CVCTools_RootPath}/templates"

# Paths to includable entities
CFG_DatastoreRoot="/home/marin/outils/cvc/datastore"
CFG_IncludePath_CHOIR="${CFG_DatastoreRoot}/choirs"
CFG_IncludePath_COMPOSER="${CFG_DatastoreRoot}/composers"
CFG_IncludePath_CONDUCTOR="${CFG_DatastoreRoot}/conductors"
CFG_IncludePath_INSTRUMENT="${CFG_DatastoreRoot}/instruments"
CFG_IncludePath_LABEL="${CFG_DatastoreRoot}/labels"
CFG_IncludePath_MUSICALERA="${CFG_DatastoreRoot}/musicaleras"
CFG_IncludePath_ORCHESTRA="${CFG_DatastoreRoot}/orchestras"
CFG_IncludePath_SLICE="${CFG_DatastoreRoot}/slices"
CFG_IncludePath_SLICETYPE="${CFG_DatastoreRoot}/slicetypes"
CFG_IncludePath_SOLOIST="${CFG_DatastoreRoot}/soloists"
CFG_IncludePath_WORK="${CFG_DatastoreRoot}/works"
CFG_IncludePath_WORKTYPE="${CFG_DatastoreRoot}/worktypes"

# Paths to external tools
CFG_ExtTools_Metaflac="metaflac"

#-------------------------------------------------------------------------------
# File extensions
#-------------------------------------------------------------------------------

# Extension of CVC files
CFG_FileExtensions_CVC="cvc"

# Extension of CVC templates
CFG_FileExtensions_CVCTemplates="cvt"

# Extension of tag files
CFG_FileExtensions_Tags="tags"

# Extension of audio files
CFG_FileExtensions_Audio="flac"

#-------------------------------------------------------------------------------
# Expansion options
#-------------------------------------------------------------------------------

# Default expansion language
CFG_CVCExpand_DefaultLanguage="fr"

# String inserted between multiple values
CFG_CVCExpand_DefaultDelimiter="/"

# String to use for untitled tracks
CFG_CVCExpand_UntitledTracks="[Sans titre]"

#-------------------------------------------------------------------------------
# Commit options
#-------------------------------------------------------------------------------

# Ignored files. These files will be ignored by cvccommit, and won't
# generate an error message. Filenames must be specified without the .cvc
# extension.
CFG_CVCCommit_IgnoredFilenames=("album")

# List of valid picture file extensions. These extensions are used to detect
# album art files.
CFG_CVCCommit_PictureExtensions=("jpg" "png")

# List of valid base names for album art picture files.
CFG_CVCCommit_AlbumArt_Front=("cover" "front")
CFG_CVCCommit_AlbumArt_Back=("back")

