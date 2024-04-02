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
	{ 0x4fe105a7, "get_acl" },
	{ 0x296d799f, "forget_cached_acl" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x931f92cc, "nfs_unlink" },
	{ 0x1eaf802d, "nfs_symlink" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0x753d0340, "xdr_stream_pos" },
	{ 0x2d60d93a, "nfs_access_set_mask" },
	{ 0xac15f3d0, "nfs_refresh_inode" },
	{ 0xf41f5250, "nfs_close_context" },
	{ 0x3feaa094, "nfs_free_client" },
	{ 0x754d539c, "strlen" },
	{ 0x2feb739b, "nfs_try_mount" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x83539423, "posix_acl_access_xattr_handler" },
	{ 0x59925ce3, "nfs_permission" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x18628c4a, "put_nfs_open_context" },
	{ 0xf09cc34, "schedule_timeout_killable" },
	{ 0xe6d9fc48, "nfs_link" },
	{ 0x85623b17, "xdr_inline_pages" },
	{ 0x5baf493e, "rpc_restart_call" },
	{ 0x3318f41c, "init_user_ns" },
	{ 0x90a5fd3, "nfs_instantiate" },
	{ 0x9fc8ca0d, "nfs_sops" },
	{ 0xdb1a1928, "nfs_setattr_update_inode" },
	{ 0x48efbf6f, "nfs_async_iocounter_wait" },
	{ 0xd50a25a5, "unregister_nfs_version" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xd4684694, "nfs_rmdir" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2fe172c5, "xdr_reserve_space" },
	{ 0xfd7adc4f, "nfs_alloc_fattr" },
	{ 0x58cb94b7, "make_kgid" },
	{ 0x98b0ece8, "nfs_init_timeout_values" },
	{ 0x8e1d3422, "rpc_delay" },
	{ 0xc7b743d, "nfs_fattr_init" },
	{ 0xbab85320, "xdr_terminate_string" },
	{ 0xee709f49, "nfs_setattr" },
	{ 0xb60ab54f, "nfs_fs_type" },
	{ 0x4043059e, "from_kuid" },
	{ 0x3ca1df63, "rpc_call_sync" },
	{ 0x31e18d9b, "rpc_call_start" },
	{ 0xf7d6636f, "current_task" },
	{ 0x855a325a, "freezing_slow_path" },
	{ 0x27e1a049, "printk" },
	{ 0x8b0f6933, "register_nfs_version" },
	{ 0x208eaaf7, "rpc_bind_new_program" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x536c30ca, "from_kgid" },
	{ 0x197d2557, "nfs_zap_acl_cache" },
	{ 0x93a9264c, "nfs_getattr" },
	{ 0xc725fb8, "posix_acl_equiv_mode" },
	{ 0x6a6a7fb9, "nfs_invalidate_atime" },
	{ 0x3e229c29, "set_cached_acl" },
	{ 0x759a6658, "get_nfs_open_context" },
	{ 0x4ba6e4b8, "posix_acl_create" },
	{ 0x2e0ac9a0, "nfsacl_encode" },
	{ 0x20c42bc0, "nfs_lookup" },
	{ 0xe8e4ba0b, "nfs_rename" },
	{ 0xa07e1daa, "nfs_put_lock_context" },
	{ 0x5f6aa9b7, "nfs_file_operations" },
	{ 0x734d1ea8, "__free_pages" },
	{  0xd5831, "nfs_get_client" },
	{ 0xa4d8c2d3, "make_kuid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa3d69aa6, "nfs_get_lock_context" },
	{ 0xa2b551a4, "nfs_revalidate_inode" },
	{ 0xdebdefe8, "nfs_mkdir" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xecafbaf6, "nfs_create" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x8c6d9a45, "posix_acl_from_mode" },
	{ 0x2632c85a, "nfsacl_decode" },
	{ 0x7f81bc12, "xdr_read_pages" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x1f2a9970, "rpc_ntop" },
	{ 0xf035ec6a, "nfs_post_op_update_inode" },
	{ 0x37a0cba, "kfree" },
	{ 0xf17b0fc, "nfs_init_client" },
	{ 0x7951f668, "nfs_create_server" },
	{ 0x22507499, "nfs_mknod" },
	{ 0x58db4a20, "posix_acl_default_xattr_handler" },
	{ 0x5d64e6fc, "nfs_submount" },
	{ 0xde6a8700, "forget_all_cached_acls" },
	{ 0xf1cd8ef7, "xdr_inline_decode" },
	{ 0x21aa3555, "nfs_access_zap_cache" },
	{ 0x95a1234a, "xdr_write_pages" },
	{ 0x3af30cb0, "nfs_dentry_operations" },
	{ 0x52af5781, "nfs_alloc_client" },
	{ 0x56f6e8d9, "nfs_writeback_update_inode" },
	{ 0x7b934074, "nlmclnt_proc" },
	{ 0xe914e41e, "strcpy" },
	{ 0x4dd0655, "nfs_clone_server" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfs,sunrpc,nfs_acl,lockd";


MODULE_INFO(srcversion, "267C5291D035DBF2AC02A29");
MODULE_INFO(rhelversion, "8.0");
