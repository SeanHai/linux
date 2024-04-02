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
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xe6478472, "_dev_info" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xc78c5942, "regmap_bulk_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x12a38747, "usleep_range" },
	{ 0x64806ce1, "regmap_bulk_write" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x749fffb4, "regmap_write" },
	{ 0x5666f7fc, "regmap_read" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("platform:it9133ax-tuner");
MODULE_ALIAS("platform:it9133bx-tuner");

MODULE_INFO(srcversion, "F53E2BEB20C14C90750FCC5");
MODULE_INFO(rhelversion, "8.0");
