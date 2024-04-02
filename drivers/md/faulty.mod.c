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
	{ 0xc41033c1, "seq_printf" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x40f3e50c, "unregister_md_personality" },
	{ 0xd5825ce3, "bio_clone_fast" },
	{ 0x67ae78d1, "disk_stack_limits" },
	{ 0x2c456f2c, "generic_make_request" },
	{ 0x5484198, "bio_endio" },
	{ 0xdde3448f, "bio_put" },
	{ 0xdd45a0de, "md_set_array_sectors" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xf776d564, "md_check_no_bitmap" },
	{ 0x27e0994c, "register_md_personality" },
	{ 0x4863dc3, "bio_associate_blkg" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5F485DF82BDC6BE2BDF563E");
MODULE_INFO(rhelversion, "8.0");
