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
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xe6478472, "_dev_info" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x70f3afb7, "devm_hwmon_device_register_with_info" },
	{ 0x9e3f36ab, "devm_add_action" },
	{ 0x5666f7fc, "regmap_read" },
	{ 0xb552153b, "__devm_regmap_init_i2c" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x749fffb4, "regmap_write" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x67c9254d, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,tmp102");
MODULE_ALIAS("of:N*T*Cti,tmp102C*");
MODULE_ALIAS("i2c:tmp102");

MODULE_INFO(srcversion, "E4BF82C7B489E2A1D7AF53F");
MODULE_INFO(rhelversion, "8.0");
