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
	{ 0x2461c45d, "adt7x10_dev_pm_ops" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xda261c70, "i2c_smbus_read_byte_data" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0x33d51101, "i2c_smbus_read_word_data" },
	{ 0x31825d44, "i2c_smbus_write_word_data" },
	{ 0xb23900c8, "adt7x10_probe" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7daaddc, "adt7x10_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=adt7x10";

MODULE_ALIAS("i2c:adt7410");
MODULE_ALIAS("i2c:adt7420");

MODULE_INFO(srcversion, "6BF79B4D53125AF9AD8E95E");
MODULE_INFO(rhelversion, "8.0");
