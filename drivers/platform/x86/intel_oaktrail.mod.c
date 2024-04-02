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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x27a0b904, "platform_device_put" },
	{ 0x97b6982d, "platform_device_del" },
	{ 0x72a6ba54, "backlight_device_unregister" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xe0c31db6, "platform_device_add" },
	{ 0xedafd5ca, "platform_device_alloc" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0xd57f0cd9, "rfkill_alloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfc4152fc, "ec_read" },
	{ 0xc708f1fe, "ec_write" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=video,rfkill";

MODULE_ALIAS("dmi*:pn*OakTrailplatform*:");

MODULE_INFO(srcversion, "F35D15883B559B837B6D53B");
MODULE_INFO(rhelversion, "8.0");
