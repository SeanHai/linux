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
	{ 0x3b23ce0e, "v4l2_ctrl_fill" },
	{ 0xba7a6199, "i2c_new_probed_device" },
	{ 0x2bb8b5cd, "spi_new_device" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2b26f667, "i2c_unregister_device" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3ad6d83e, "v4l2_device_register_subdev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd153cccf, "v4l2_subdev_init" },
	{ 0x91359cd8, "spi_unregister_device" },
	{ 0x28318305, "snprintf" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x62a67793, "i2c_new_device" },
	{ 0x85075cb1, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev";


MODULE_INFO(srcversion, "E335B8605A9C5CBD7903085");
MODULE_INFO(rhelversion, "8.0");
