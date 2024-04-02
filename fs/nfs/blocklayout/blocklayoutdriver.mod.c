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
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x11184a58, "pnfs_generic_pg_init_write" },
	{ 0x987ed54e, "fs_bio_set" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0x80a72f1a, "bio_alloc_bioset" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0xa1d95693, "page_cache_next_hole" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x7c9722ba, "nfs_dreq_bytes_left" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xe2d01de9, "rpc_unlink" },
	{ 0xd01271f8, "pnfs_ld_write_done" },
	{ 0xdade16fa, "pnfs_error_mark_layout_for_return" },
	{ 0xbda28fdd, "dput" },
	{ 0x3e7e855f, "nfs4_delete_deviceid" },
	{ 0xc3a2be67, "nfs_net_id" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x4deb952e, "nfs4_mark_deviceid_unavailable" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xf0a022ee, "rpc_mkpipe_data" },
	{ 0xf9e9921, "rpc_mkpipe_dentry" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2cf5b814, "pnfs_generic_pg_test" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xece784c2, "rb_first" },
	{ 0xb784e27, "rpc_get_sb_net" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{  0xef03a, "pnfs_generic_pg_cleanup" },
	{ 0x383e0fd2, "pnfs_generic_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0xd1209c48, "xdr_init_decode_pages" },
	{ 0xe92e07a4, "rpc_queue_upcall" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x294477d6, "bio_add_page" },
	{ 0x6c17d868, "nfs4_find_get_deviceid" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xd63b3cd4, "blkdev_get_by_path" },
	{ 0xec5b6fc8, "nfs_pageio_reset_write_mds" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x741d3763, "rpc_d_lookup_sb" },
	{ 0x652fc367, "blkdev_get_by_dev" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdc244708, "nfs4_put_deviceid_node" },
	{ 0xdde3448f, "bio_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xd7862d3c, "rpc_pipe_generic_upcall" },
	{ 0xd943f820, "submit_bio" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x387e1639, "rpc_pipefs_notifier_register" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0x276a968d, "rpc_destroy_pipe_data" },
	{ 0x4de931cc, "blkdev_put" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xe2a35378, "rpc_put_sb_net" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa1fc40e9, "pnfs_generic_pg_readpages" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xce53a319, "pnfs_generic_pg_writepages" },
	{ 0xa9bd2676, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe094a7a8, "pnfs_generic_pg_init_read" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb51a3724, "rpc_pipefs_notifier_unregister" },
	{ 0x121da905, "queue_work_on" },
	{ 0xf1cd8ef7, "xdr_inline_decode" },
	{ 0x3de37959, "vmalloc_to_page" },
	{ 0xb5c9dab5, "nfs_pageio_reset_read_mds" },
	{ 0xba348b3a, "nfs4_init_deviceid_node" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x7f7fec01, "pnfs_set_lo_fail" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0xbf64f0e3, "xdr_set_scratch_buffer" },
	{ 0x12a467f3, "pnfs_ld_read_done" },
	{ 0x2a6bb061, "__put_page" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x8901fe59, "pnfs_register_layoutdriver" },
	{ 0xf1e63929, "devmap_managed_key" },
	{ 0x4863dc3, "bio_associate_blkg" },
	{ 0x8a35b432, "sme_me_mask" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfsv4,sunrpc,nfs";


MODULE_INFO(srcversion, "1F4A19FC18C38660DCCD02D");
MODULE_INFO(rhelversion, "8.0");
