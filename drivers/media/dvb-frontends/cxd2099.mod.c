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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xa0c01258, "__regmap_init_i2c" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x69acdf38, "memcpy" },
	{ 0xccda9cad, "regmap_raw_write" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xe6478472, "_dev_info" },
	{ 0xcd86c9b6, "regmap_raw_read" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5666f7fc, "regmap_read" },
	{ 0x749fffb4, "regmap_write" },
	{ 0x37a0cba, "kfree" },
	{ 0x4614de75, "regmap_exit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:cxd2099");

MODULE_INFO(srcversion, "514C383E89AD1188199537E");
MODULE_INFO(rhelversion, "8.0");
