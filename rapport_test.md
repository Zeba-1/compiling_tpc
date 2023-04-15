# Test du Sam 15 avr 2023 15:39:04 CEST
## --- Good test ---
- test/good/add.tpc: 0
- test/good/and.tpc: 0
- test/good/char.tpc: 0
- test/good/decl_affect.tpc: 0
- test/good/exemple.tpc: 0
- test/good/or.tpc: 0
- test/good/type.tpc: 0
## -- SynErr test --
- test/syn-err/+pointvirgule.tpc: 1
- test/syn-err/-point_virgule.tpc: 1
- test/syn-err/flut.tpc: 1
- test/syn-err/global_affect.tpc: 1
- test/syn-err/hors_main.tpc: 1
- test/syn-err/name_variable.tpc: 1
- test/syn-err/or.tpc: 1
- test/syn-err/order.tpc: 0
## -- SemErr test --
- test/sem-err/enough_args.tpc: 2
- test/sem-err/few_args.tpc: 2
- test/sem-err/no_def_variable.tpc: 139
- test/sem-err/redef_param.tpc: 0
- test/sem-err/undif_variable.tpc: 2
- test/sem-err/undifined_func.tpc: 2
