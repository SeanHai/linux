#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x402b8281, "__request_module" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7e29e01c, "dibusb_read_eeprom_byte" },
	{ 0xcc0e6b77, "dib3000mc_pid_parse" },
	{ 0xda12dba2, "dib3000mc_pid_control" },
	{ 0x7827d3e1, "dib3000mc_get_tuner_i2c_master" },
	{ 0x27e1a049, "printk" },
	{ 0xb99ac3b6, "dib3000mc_set_config" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6e9dd606, "__symbol_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb-dibusb-common,dib3000mc";


MODULE_INFO(srcversion, "651A7855D8787DDA6478646");
MODULE_INFO(rhelversion, "8.0");
