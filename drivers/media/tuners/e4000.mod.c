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
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xe6478472, "_dev_info" },
	{ 0xf65fde3e, "v4l2_i2c_subdev_init" },
	{ 0x37b90fbc, "v4l2_ctrl_auto_cluster" },
	{ 0x6b25ae0e, "v4l2_ctrl_new_std" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0xb552153b, "__devm_regmap_init_i2c" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x5666f7fc, "regmap_read" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc78c5942, "regmap_bulk_read" },
	{ 0x64806ce1, "regmap_bulk_write" },
	{ 0x749fffb4, "regmap_write" },
	{ 0x37a0cba, "kfree" },
	{ 0xc40c9cea, "v4l2_ctrl_handler_free" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=v4l2-common,videodev";

MODULE_ALIAS("i2c:e4000");

MODULE_INFO(srcversion, "7632A2B1113EEE9FC0BA6F0");
MODULE_INFO(rhelversion, "8.0");
