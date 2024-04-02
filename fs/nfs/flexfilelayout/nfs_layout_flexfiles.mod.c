#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0x94302b80, "pnfs_unregister_layoutdriver" },
	{ 0x2379899d, "nfs4_schedule_session_recovery" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0xdcc01dd9, "pnfs_nfs_generic_sync" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0x8468fbb4, "xdr_init_encode" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0xc8246ae5, "nfs4_pnfs_ds_connect" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xa8c4ff70, "pnfs_generic_clear_request_commit" },
	{ 0x664d2bbb, "nfs4_setup_sequence" },
	{ 0x9265a2d1, "nfs_init_cinfo" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x9e16ae38, "nfs_initiate_commit" },
	{ 0xdade16fa, "pnfs_error_mark_layout_for_return" },
	{ 0x747d9229, "nfs4_pnfs_ds_put" },
	{ 0x37d19c64, "put_rpccred" },
	{ 0x54bef45, "layoutstats_timer" },
	{ 0x3e7e855f, "nfs4_delete_deviceid" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3318f41c, "init_user_ns" },
	{ 0x643d9ba1, "groups_free" },
	{ 0x7f1b7c5a, "__tracepoint_nfs4_pnfs_commit_ds" },
	{ 0x2f90e52c, "nfs4_decode_mp_ds_addr" },
	{ 0x2e7975e, "nfs_initiate_pgio" },
	{ 0xa0c3040, "nfs4_set_rw_stateid" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xd2fed83d, "pnfs_generic_commit_pagelist" },
	{ 0xbf7765b3, "pnfs_generic_recover_commit_reqs" },
	{ 0x6e9f1c43, "nfs4_sequence_done" },
	{ 0x2fe172c5, "xdr_reserve_space" },
	{ 0x2cf5b814, "pnfs_generic_pg_test" },
	{ 0x5ebbc686, "pnfs_update_layout" },
	{ 0x58cb94b7, "make_kgid" },
	{ 0xb12f17a9, "rpc_exit" },
	{  0xef03a, "pnfs_generic_pg_cleanup" },
	{ 0xcb96d975, "pnfs_generic_write_commit_done" },
	{ 0x8e1d3422, "rpc_delay" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x125dfae0, "pnfs_generic_layout_insert_lseg" },
	{ 0xd1209c48, "xdr_init_decode_pages" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x4043059e, "from_kuid" },
	{ 0x31e18d9b, "rpc_call_start" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xf4a3b813, "pnfs_read_resend_pnfs" },
	{ 0x6c17d868, "nfs4_find_get_deviceid" },
	{ 0x536c30ca, "from_kgid" },
	{ 0x42405eb8, "nfs4_find_or_create_ds_client" },
	{ 0x2e50e6e0, "rpc_max_payload" },
	{ 0xec5b6fc8, "nfs_pageio_reset_write_mds" },
	{ 0x9304d3f2, "pnfs_layout_mark_request_commit" },
	{ 0xeacd2d54, "pnfs_destroy_layout" },
	{ 0x5d5b3d31, "nfs4_pnfs_ds_add" },
	{ 0x9dbad7ff, "pnfs_layoutcommit_inode" },
	{ 0x9015ae84, "pnfs_put_lseg" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdc244708, "nfs4_put_deviceid_node" },
	{ 0x3b5a8b53, "pnfs_report_layoutstat" },
	{ 0xed15fb41, "nfs4_print_deviceid" },
	{ 0x33066a93, "pnfs_set_layoutcommit" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa051ccdd, "pnfs_generic_scan_commit_lists" },
	{ 0x69d3558d, "pnfs_generic_rw_release" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0xa4d8c2d3, "make_kuid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xca3a041c, "nfs4_test_deviceid_unavailable" },
	{ 0x6085edbd, "nfs_map_string_to_numeric" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf999267e, "pnfs_generic_commit_release" },
	{ 0xa1fc40e9, "pnfs_generic_pg_readpages" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x73dc8888, "pnfs_read_done_resend_to_mds" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0xb91539fe, "rpc_restart_call_prepare" },
	{ 0x3e2b0ba6, "groups_alloc" },
	{ 0xce53a319, "pnfs_generic_pg_writepages" },
	{ 0xef09ad41, "pnfs_generic_prepare_to_resend_writes" },
	{ 0x37a0cba, "kfree" },
	{ 0xecd2f9bf, "pnfs_generic_pg_check_layout" },
	{ 0x69acdf38, "memcpy" },
	{ 0x32d3b224, "__tracepoint_nfs4_pnfs_read" },
	{ 0x7886c242, "pnfs_write_done_resend_to_mds" },
	{ 0x5e4b4abc, "rpc_wake_up" },
	{ 0x8313ef2c, "rpc_count_iostats_metrics" },
	{ 0xf1cd8ef7, "xdr_inline_decode" },
	{ 0x3cc12d8, "__tracepoint_nfs4_pnfs_write" },
	{ 0x28318305, "snprintf" },
	{ 0xbd75ca8, "rpc_lookup_generic_cred" },
	{ 0x95a1234a, "xdr_write_pages" },
	{ 0xb5c9dab5, "nfs_pageio_reset_read_mds" },
	{ 0xba348b3a, "nfs4_init_deviceid_node" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xbf64f0e3, "xdr_set_scratch_buffer" },
	{ 0x56f6e8d9, "nfs_writeback_update_inode" },
	{ 0x2a6bb061, "__put_page" },
	{ 0x8901fe59, "pnfs_register_layoutdriver" },
	{ 0xf1e63929, "devmap_managed_key" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfsv4,sunrpc,nfs";


MODULE_INFO(srcversion, "72FFB67854B384A745AA64B");
MODULE_INFO(rhelversion, "8.0");
