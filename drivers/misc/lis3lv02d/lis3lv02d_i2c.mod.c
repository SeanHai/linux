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
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf21ea555, "lis3lv02d_init_device" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15f864fa, "i2c_smbus_read_i2c_block_data" },
	{ 0xda261c70, "i2c_smbus_read_byte_data" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0xfe829980, "lis3lv02d_remove_fs" },
	{ 0xbe4c6ae5, "lis3_dev" },
	{ 0x3d2e6568, "lis3lv02d_joystick_disable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6816739f, "lis3lv02d_poweroff" },
	{ 0x9cc9ddb3, "lis3lv02d_poweron" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lis3lv02d";

MODULE_ALIAS("i2c:lis3lv02d");
MODULE_ALIAS("i2c:lis331dlh");

MODULE_INFO(srcversion, "3990F3CDFF327981BCF8BD6");
MODULE_INFO(rhelversion, "8.0");
