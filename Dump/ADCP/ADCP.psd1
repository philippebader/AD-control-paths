@{

# Script module or binary module file associated with this manifest.
RootModule = 'ADCP.psm1'

# Version number of this module.
ModuleVersion = '1.0'

# Supported PSEditions
# CompatiblePSEditions = @()

# ID used to uniquely identify this module
GUID = '3ba18708-58c9-47ce-b88a-163f92bc8e23'

# Author of this module
Author = 'ADCP contributors'
CompanyName = ''

Copyright = 'CeCILL FREE SOFTWARE LICENSE AGREEMENT Version 2.1 dated 2013-06-21'

# Description of the functionality provided by this module
# Description = ''

# Minimum version of the Windows PowerShell engine required by this module
PowerShellVersion = '2.0'

# Processor architecture (None, X86, Amd64) required by this module
# ProcessorArchitecture = ''

# Assemblies that must be loaded prior to importing this module
# RequiredAssemblies = @()

# Script files (.ps1) that are run in the caller's environment prior to importing this module.
# ScriptsToProcess = @()

# Type files (.ps1xml) to be loaded when importing this module
# TypesToProcess = @()

# Format files (.ps1xml) to be loaded when importing this module
# FormatsToProcess = @()

# Modules to import as nested modules of the module specified in RootModule/ModuleToProcess
# NestedModules = @()

# Functions to export from this module, for best performance, do not use wildcards and do not delete the entry, use an empty array if there are no functions to export.
FunctionsToExport = @('Get-ADCPDump',
                      'Prepare-ADCPDump',
                      'Import-ADCPDump',
                      'List-ADCPInstances',
                      'Remove-ADCPInstance',
                      'Start-ADCPInstance')

# Cmdlets to export from this module, for best performance, do not use wildcards and do not delete the entry, use an empty array if there are no cmdlets to export.
#CmdletsToExport = @()

# Variables to export from this module
#VariablesToExport = '*'

# Aliases to export from this module, for best performance, do not use wildcards and do not delete the entry, use an empty array if there are no aliases to export.
#AliasesToExport = '*'

# DSC resources to export from this module
# DscResourcesToExport = @()

# List of all modules packaged with this module
# ModuleList = @()

# List of all files packaged with this module
FileList = @('ADCP.psm1',
             'Get-ADCPDump.ps1',
             'Prepare-ADCPDump.ps1',
             'Import-ADCPDump.ps1',
             'ADCPInstances.ps1')

# HelpInfo URI of this module
HelpInfoURI = 'https://github.com/ANSSI-FR/AD-control-paths'

}

