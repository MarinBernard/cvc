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
CFG_IncludePath_RootPath="${CFG_CVCTools_RootPath}/../cvc-datastore"
CFG_IncludePath_CHOIR="${CFG_IncludePath_RootPath}/choirs"
CFG_IncludePath_COMPOSER="${CFG_IncludePath_RootPath}/composers"
CFG_IncludePath_CONDUCTOR="${CFG_IncludePath_RootPath}/conductors"
CFG_IncludePath_INSTRUMENT="${CFG_IncludePath_RootPath}/instruments"
CFG_IncludePath_INSTRUMENTALIST="${CFG_IncludePath_RootPath}/instrumentalists"
CFG_IncludePath_LABEL="${CFG_IncludePath_RootPath}/labels"
CFG_IncludePath_MEDIUMTYPE="${CFG_IncludePath_RootPath}/mediumtypes"
CFG_IncludePath_MUSICALERA="${CFG_IncludePath_RootPath}/musicaleras"
CFG_IncludePath_ORCHESTRA="${CFG_IncludePath_RootPath}/orchestras"
CFG_IncludePath_RELEASECHANNEL="${CFG_IncludePath_RootPath}/releasechannels"
CFG_IncludePath_RELEASESOURCE="${CFG_IncludePath_RootPath}/releasesources"
CFG_IncludePath_SLICE="${CFG_IncludePath_RootPath}/works"
CFG_IncludePath_SLICETYPE="${CFG_IncludePath_RootPath}/slicetypes"
CFG_IncludePath_WORK="${CFG_IncludePath_RootPath}/works"
CFG_IncludePath_WORKTYPE="${CFG_IncludePath_RootPath}/worktypes"

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

# String inserted between each catalog id assigned to a work.
# This is used for dynamic album title generation.
CFG_CVCExpand_CatalogIdDelimiter=", "

# String to use for untitled tracks
CFG_CVCExpand_UntitledTracks="[Sans titre]"

#-------------------------------------------------------------------------------
# Commit options
#-------------------------------------------------------------------------------

# Ignored files. These files will be ignored by cvccommit, and won't
# generate an error message. Filenames must be specified without the .cvc
# extension.
CFG_CVCCommit_IgnoredFilenames=("performance" "release")

# List of valid picture file extensions. These extensions are used to detect
# album art files.
CFG_CVCCommit_PictureExtensions=("jpg" "png")

# List of valid base names for album art picture files.
CFG_CVCCommit_AlbumArt_Front=("cover" "front")
CFG_CVCCommit_AlbumArt_Back=("back")
