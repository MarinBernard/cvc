# CVC Language reference


## Inclusion directives

The current version of Cascaded Vorbis Comments supports the following inclusion
directives:

### The @INCLUDE inclusion directive
This directive might be used to include any other CVC file. The file may be
specified with its absolute path, or with a path relative to the including CVC
file. The `@INCLUDE` directive is used to include arbitrary CVC files, which do
not belong to a datastore.

Example: `@INCLUDE=../common`

### The @CHOIR inclusion directive
This directive allows to include a CVC file from the `CFG_IncludePath_CHOIR`
directory. Those files describe vocal ensembles. They are named after the
international name of the ensemble, without accents nor diacritics.

Example: `@CHOIR=RIAS Chamber Choir`

### The @COMPOSER inclusion directive
This directive allows to include a CVC file from the `CFG_IncludePath_COMPOSER`
directory. Those files describe music composers. They are named after the
international name of the composer, sorted form, without accents or diacritics.

Example: `@COMPOSER=Bach, Johann Sebastian`

### The @CONDUCTOR inclusion directive
This directive allows to include a CVC file from the
`CFG_IncludePath_CONDUCTOR` directory. Those files describe music conductors.
They are named after the international name of the conductor, sorted form,
without accents or diacritics.

Example: `@CONDUCTOR=Barenboim, Daniel`

### The @INSTRUMENT inclusion directive
This directive allows to include a CVC file from the
`CFG_IncludePath_INSTRUMENT` directory. Those files describe music instruments.
They are named after the english name of the instrument.

Example: `@INSTRUMENT=Viola`

### The @LABEL inclusion directive
This directive allows to include a CVC file from the `CFG_IncludePath_LABEL`
directory. Those files describe music labels. They are named after their
international name, without accents nor diacritics. Using inclusions for labels
allows to easily update music files when labels are sold, bought, renamed or
merged without overwriting the original label name.

Example: `@LABEL=Deutsche Grammophon`

### The @MEDIUMTYPE inclusion directive
This directive allows to include a CVC file from the
`CFG_IncludePath_MEDIUMTYPE` directory. Those files describe types of audio
media.

Example: `@MEDIUMTYPE=CDDA`

### The @MUSICALERA inclusion directive
This directive allows to include a CVC file from the
`CFG_IncludePath_MUSICALERA` directory. Those files describe musical eras.
They are named after their english name. Note that CVC names musical eras with
nouns, not adjectives.

Example: `@MUSICALERA=Romantism`

### The @ORCHESTRA inclusion directive
This directive allows to include a CVC file from the
`CFG_IncludePath_ORCHESTRA` directory. Those files describe instrumental
ensembles. They are named after their international name, without accents
or diacritics.

Example: `@ORCHESTRA=Berliner Philharmoniker`

### The @RELEASECHANNEL inclusion directive
This directive allows to include a CVC file from the
`CFG_IncludePath_RELEASECHANNEL` directory. Those files describe channels
of diffusion for audio releases.

Example: `@RELEASECHANNEL=Retail`

### The @RELEASESOURCE inclusion directive
This directive allows to include a CVC file from the
`CFG_IncludePath_RELEASESOURCE` directory. Those files describe the source
of the audio material included in a release.

Example: `@RELEASESOURCE=Live recording`


### The @SLICE inclusion directive
This directive allows to include a CVC file from the `CFG_IncludePath_SLICE`
directory. Those files describe parts of music works. Music works are usually
divided into several parts. The way a musical work is divided may change from
one recording to another. This makes tagging classical music a very complicated
task. The CVC datastore takes this complexity into account by maintaining
distinct sets of files for all known ways of dividing a music work. That way,
album which divide the same work the same way will include the same CVC files:
they will share data instead of relying on static tags.

Each part of a divided work is called a slice. The same work can be divided
into various numbers of slices. For instance, the same piano concerto can be
divided into 1 slice (single track), 3 slices (3 tracks), or even 4 slices
(4 tracks) on specific albums. CVC deals with this complexity by keeping
distinct sets of files for each way to divide the work. All tracks of a
given version will then include CVC files from the same set, thanks to the
`@SLICE` inclusion directive.

SLICE CVC files are organized in a 4-level hierarchy of subfolders. The first
3 levels are identical to those of the `@WORK` directive, i.e.:

`<ComposerSortName>/<CatalogueName>/<CatalogueId>`
Or:
`<ComposerSortName>/opus/<OpusNumber>`

The fourth level subdirectory is named after the total number of
slices in the set. Finally, leaf files are numbered from 01 to the
total number of slices of the set. The whole pattern is as follows:

`<ComposerSortName>/<CatalogueName>/<CatalogueId>/<slices>/<nn>`
Or:
`<ComposerSortName>/opus/<OpusNumber>/<slices>/<nn>`

The following example shows the inclusion of a CVC file describing
the slice 22 of a 68-part version of Bach's St. Matthew Passion:

`@WORKSLICE=Bach, Johann Sebastian/BWV/244/68/22`

### The @SLICETYPE inclusion directive
This directive allows to include a CVC file from the
`CFG_IncludePath_SLICETYPE` directory. Those files describe types of work
slices. They are named after their English name, without accents nor
diacritics.

Example: `@SLICETYPE=Recitative`

### The @SOLOIST inclusion directive
This directive allows to include a CVC file from the `CFG_IncludePath_SOLOIST`
directory. Those files describe instrumental or vocal soloists. Soloist files
are stored in subdirectories named after the instrument they play. For
instance, piano solists lie in the `Piano/` subdirectory. Subdirectories always
take the english name of the solo instrument. Soloist files are named after the
international name of the musician, sorted form, without accents or diacritics.

Example: `@SOLOIST=Piano/Barenboim, Daniel`

### The @WORK inclusion directive
This directive allows to include a CVC file from the `CFG_IncludePath_WORK`
directory. Those files describe music works. Work files are stored in
subdirectories named after their composer. For instance, all music works of
Johann Sebastian Bach lie in the `Bach, Johann Sebastian/` subdirectory.
Subdirectories are always named after the international name of the composer,
sorted form, without accents nor diacritics. Within the subdirectory of a
composer, works are usually sorted by opus number or using the id of one or
several thematic catalogues. There usually exists a `opus` subdirectory,
and one more subdirectory per thematic catalogue (like `BWV` for Bach or `KV`
for Mozart). The leaf file describing the work is then named after the opus
number of the catalogue Id. In short, `@WORK` inclusions usually use one of
the following patterns:

`<ComposerSortName>/<CatalogueName>/<CatalogueId>`
Or:
`<ComposerSortName>/opus/<OpusNumber>`

Example: `@WORK=Bach, Johann Sebastian/BWV/244`

### The @WORKTYPE inclusion directive
This directive allows to include a CVC file from the `CFG_IncludePath_WORKTYPE`
directory. Those files describe types of works. They are named after their
English name, without accents nor diacritics.

Example: `@WORKTYPE=Cantata`

## Aliases

### The +CHARACTER alias
#### Description
The `+CHARACTER` alias allows to describe a character within a dramatic work
such as an opera. The resulting Vorbis Comments will be used to generate
lists of character names included into track titles.
#### Usage
```
+CHARACTER=<FullName>|<ShortName>
```
The alias may be used with 1 or 2 parameters:
1. `<FullName>` (mandatory) defines the full name of a character.
2. `<ShortName>` (optional) defines the short form of a character's name.
#### Rendering with 1 parameter
```
+CHARACTER=<FullName>
```
Becomes:
```
CHARACTER=<FullName>
```
#### Rendering with 2 parameters
```
+CHARACTER=<FullName>|<ShortName>
```
Becomes:
```
CHARACTER=<FullName>
CHARACTERSHORT=<ShortName>
```

### The +CHOIRNAME alias
#### Description
The `+CHOIRNAME` alias allows to describe a vocal ensemble such as a choir.
#### Usage
```
+CHOIRNAME=<FullName>|<SortName>|<ShortName>
```
The alias may be used with 1 or 2 parameters:
1. `<FullName>` (mandatory) defines the full name of a choir.
2. `<SortName>` (optional) defines the sort-friendly form of a choir's name.
3. `<ShortName>` (optional) defines the short form of a choir's name.
#### Rendering with 1 parameter
```
+CHOIRNAME=<FullName>
```
Becomes:
```
ENSEMBLE=<FullName>
ARTIST=<FullName>
```
#### Rendering with 2 parameters
```
+CHOIRNAME=<FullName>|<SortName>
```
Becomes:
```
ENSEMBLE=<FullName>
ENSEMBLESORT=<SortName>
ARTIST=<FullName>
ARTISTSORT=<SortName>
```
#### Rendering with 3 parameters
```
+CHOIRNAME=<FullName>|<SortName>|<ShortName>
```
Becomes:
```
ENSEMBLE=<FullName>
ENSEMBLESORT=<SortName>
ENSEMBLESHORT=<ShortName>
ARTIST=<FullName>
ARTISTSORT=<SortName>
ARTISTSHORT=<ShortName>
```