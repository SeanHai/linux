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
	{ 0xa4584c17, "deregister_mtd_blktrans" },
	{ 0x9bca1be8, "register_mtd_blktrans" },
	{ 0x37a0cba, "kfree" },
	{ 0x2acb74ae, "add_mtd_blktrans_dev" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0x204aeea3, "mtd_read" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x999e8297, "vfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa28792d4, "mtd_write" },
	{ 0xd33af230, "mtd_erase" },
	{ 0x8aaac153, "del_mtd_blktrans_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mtd_blkdevs,mtd";


MODULE_INFO(srcversion, "D5404A6E3E110B7743423BF");
MODULE_INFO(rhelversion, "8.0");
