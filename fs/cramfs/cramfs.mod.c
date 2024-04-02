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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0xfc81423, "generic_file_llseek" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xcbd7280e, "mount_bdev" },
	{ 0x54c8b65f, "page_symlink_inode_operations" },
	{ 0x1d8ec8d8, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x58cb94b7, "make_kgid" },
	{ 0x27e1a049, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8569cf24, "generic_ro_fops" },
	{ 0xaa64a0e8, "wait_on_page_bit" },
	{ 0x244db10a, "unlock_page" },
	{ 0xebade011, "inode_nohighmem" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa4d8c2d3, "make_kuid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2f0c1ee9, "unlock_new_inode" },
	{ 0x2f011045, "kill_block_super" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x962dc318, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x918a7629, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0xbb0540aa, "zlib_inflateReset" },
	{ 0x96ef158b, "d_splice_alias" },
	{ 0xb43d8c2d, "sync_filesystem" },
	{ 0xe60ffa7a, "d_make_root" },
	{ 0xb74da11c, "unregister_filesystem" },
	{ 0x7e092309, "init_special_inode" },
	{ 0x2a6bb061, "__put_page" },
	{ 0x790a965d, "iget_locked" },
	{ 0xf1e63929, "devmap_managed_key" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "845E2006F1AE48792F04B57");
MODULE_INFO(rhelversion, "8.0");
