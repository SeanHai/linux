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
	{ 0x15c31846, "fat_detach" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x237c9e5e, "drop_nlink" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0xdae832ee, "mark_buffer_dirty_inode" },
	{ 0xd0da80a5, "__mark_inode_dirty" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xbda28fdd, "dput" },
	{ 0x4839845a, "inc_nlink" },
	{ 0x7169d4c3, "d_find_alias" },
	{ 0x3096be16, "names_cachep" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xcbd7280e, "mount_bdev" },
	{ 0x329a99b2, "fat_sync_inode" },
	{ 0xb42ab8ce, "fat_add_entries" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x447c5ca1, "fat_remove_entries" },
	{ 0xfed2ffaf, "fat_alloc_new_dir" },
	{ 0x57e8e26e, "fat_fill_super" },
	{ 0xcbfaa92, "fat_build_inode" },
	{ 0x11089ac7, "_ctype" },
	{ 0xa5571aab, "fat_attach" },
	{ 0x924108d3, "d_move" },
	{ 0x5a921311, "strncmp" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xc78c85c9, "set_nlink" },
	{ 0x96bff53c, "sync_dirty_buffer" },
	{ 0x95475f5e, "fat_getattr" },
	{ 0xcb5efe82, "__brelse" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2f011045, "kill_block_super" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51ae724f, "fat_search_long" },
	{ 0x37500af1, "hex2bin" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x800fb92b, "full_name_hash" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbb2aa7b5, "fat_scan" },
	{ 0x962dc318, "register_filesystem" },
	{ 0x43f30d55, "__fat_fs_error" },
	{ 0x61d9d11c, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xddad0649, "current_time" },
	{ 0x96ef158b, "d_splice_alias" },
	{ 0xa4d98f99, "fat_setattr" },
	{ 0x645d9afa, "fat_free_clusters" },
	{ 0x1be02ef5, "fat_get_dotdot_entry" },
	{ 0xb74da11c, "unregister_filesystem" },
	{ 0xc29a1392, "fat_time_unix2fat" },
	{ 0x28318305, "snprintf" },
	{ 0xa2f7b266, "fat_dir_empty" },
	{ 0x5f6846e7, "d_instantiate" },
	{ 0x523047de, "clear_nlink" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fat";


MODULE_INFO(srcversion, "B3C4EEB45B76B57156F5651");
MODULE_INFO(rhelversion, "8.0");
