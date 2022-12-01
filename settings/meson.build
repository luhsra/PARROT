settings_dir = meson.current_source_dir()

# common flags for clang
clang_flags = ['-g',  # generate debug information
               '-O0',
               '-Xclang', '-disable-O0-optnone',  # don't set the noopt attribute (prevent optimization needed by ARA)
               '-ffunction-sections',
               '-fdata-sections',
               '-fno-rtti',
               '-Wno-everything',
               '-fno-discard-value-names',  # use the C/C++ variable names for the pendent in the LLVM IR when possible
               '-fno-exceptions']

llvm_opt_flags = [
  # '-time-passes',
  # '-Og',
  '-O2',
]

llc_flags = ['--function-sections',
             '--data-sections',
            ]
ld_flags = ['-Wl,--gc-sections',
            '-Wl,--warn-common',
            '-Wl,--warn-section-align',
            '-Wl,--cref',
            '-Wl,-Map,@OUTPUT0@.map'
           ]

# compiler flags to generate IR
ir_flags = ['-S', '-emit-llvm',]
obj_flags = ['-c']

# standard invocations for clang with c and cpp
c_std = '-std=c11'
cxx_std = '-std=c++11'
clang_base = [
           '-o', '@OUTPUT0@',
           '@INPUT@',
           '-MD', '-MF', '@DEPFILE@',
]
clang_c = [clang, clang_base, c_std]
clang_cpp = [clang, clang_base, cxx_std]

#ar_cmd = [ar, 'qcs', '@OUTPUT@', '@INPUT@']
llc_cmd = [llc, '-filetype=obj', '-o', '@OUTPUT@', '@INPUT@', ] + llc_flags
objcopy_cmd = [objcopy, '-Obinary', '@INPUT@', '@OUTPUT@']
llvm_link_cmd = [ara_link, '-S', '-o', '@OUTPUT@', '@INPUT@',]
llvm_opt_cmd = [llvm_opt, '-S', '-o', '@OUTPUT@', '@INPUT@'] + llvm_opt_flags

llvm_lto_cmd_none = ['cp', '@INPUT@', '@OUTPUT@']
llvm_lto_cmd_standard = llvm_opt_cmd
llvm_lto_cmd_rle2 = llvm_opt_cmd + ['-load', sparse_rle2.full_path(), '-SparseRLE2']
