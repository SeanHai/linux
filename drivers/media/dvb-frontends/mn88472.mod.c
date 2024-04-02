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
	{ 0x5ccde853, "i2c_new_dummy" },
	{ 0xa0c01258, "__regmap_init_i2c" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x64806ce1, "regmap_bulk_write" },
	{ 0xe6478472, "_dev_info" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x8733236, "intlog10" },
	{ 0xc78c5942, "regmap_bulk_read" },
	{ 0x5666f7fc, "regmap_read" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x749fffb4, "regmap_write" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0x2b26f667, "i2c_unregister_device" },
	{ 0x4614de75, "regmap_exit" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core";

MODULE_ALIAS("i2c:mn88472");

MODULE_INFO(srcversion, "85292964A3942F9D7339809");
MODULE_INFO(rhelversion, "8.0");
