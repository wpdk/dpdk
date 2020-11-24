# SPDX-License-Identifier: BSD-3-Clause
# Copyright(c) 2017 Intel Corporation

drivers = ['bucket', 'dpaa', 'dpaa2', 'octeontx', 'octeontx2', 'ring', 'stack']

if is_windows
	drivers = ['ring']
endif

std_deps = ['mempool']
config_flag_fmt = 'RTE_LIBRTE_@0@_MEMPOOL'
driver_name_fmt = 'rte_mempool_@0@'
