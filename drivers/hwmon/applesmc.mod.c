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
	{ 0x2b259a46, "hwmon_device_unregister" },
	{ 0xe45c1b14, "__release_region" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0x29686856, "hwmon_device_register" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x3df9e726, "input_register_polled_device" },
	{ 0x822030b4, "input_set_abs_params" },
	{ 0x1c504203, "input_allocate_polled_device" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x5eba9410, "__request_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfe7843b, "input_event" },
	{ 0x1daf1f8d, "sysfs_create_file_ns" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x3ed5b2b6, "input_free_polled_device" },
	{ 0xefed9dd7, "input_unregister_polled_device" },
	{ 0x570add14, "sysfs_remove_file_ns" },
	{ 0x121da905, "queue_work_on" },
	{ 0x37a0cba, "kfree" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x27e1a049, "printk" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x28318305, "snprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=input-polldev";

MODULE_ALIAS("dmi*:pn*MacBookAir*:rvn*Apple*:");
MODULE_ALIAS("dmi*:pn*MacBookPro*:rvn*Apple*:");
MODULE_ALIAS("dmi*:pn*MacBook*:rvn*Apple*:");
MODULE_ALIAS("dmi*:pn*Macmini*:rvn*Apple*:");
MODULE_ALIAS("dmi*:pn*MacPro*:rvn*Apple*:");
MODULE_ALIAS("dmi*:pn*iMac*:rvn*Apple*:");

MODULE_INFO(srcversion, "699A3BDE828258C98F066B7");
MODULE_INFO(rhelversion, "8.0");
