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
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x357df27e, "__platform_driver_probe" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0x4fdee897, "i8042_command" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x1b8b95ad, "i8042_unlock_chip" },
	{ 0x17f341a0, "i8042_lock_chip" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("dmi*:svn*VIA*:pn*K8N800*:pvr*VT8204B*:");
MODULE_ALIAS("dmi*:svn*CLEVOCo.*:pn*M5x0N*:");
MODULE_ALIAS("dmi*:pvr*VT6198*:rvn*CLEVOCo.*:rn*M5X0V*:");
MODULE_ALIAS("dmi*:pvr*0106*:rvn*Clevo*:rn*D400P*:rvr*Rev.A*:");
MODULE_ALIAS("dmi*:pvr*Rev.A1*:rvn*Clevo,Co.*:rn*D400V/D470V*:rvr*SS78B*:");

MODULE_INFO(srcversion, "99C06A4FB512A17407CB61F");
MODULE_INFO(rhelversion, "8.0");
