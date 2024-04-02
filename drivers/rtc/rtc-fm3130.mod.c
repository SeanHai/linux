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
	{ 0xd7258a3c, "dev_warn" },
	{ 0xf1f77788, "devm_rtc_device_register" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xda261c70, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:fm3130");

MODULE_INFO(srcversion, "EF01903BB9FE9EC46223A94");
MODULE_INFO(rhelversion, "8.0");
