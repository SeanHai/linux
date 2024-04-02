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
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x42c62921, "acpi_bus_unregister_driver" },
	{ 0x135d5c6a, "acpi_bus_register_driver" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x72a6ba54, "backlight_device_unregister" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0xefed9dd7, "input_unregister_polled_device" },
	{ 0x3ed5b2b6, "input_free_polled_device" },
	{ 0x3df9e726, "input_register_polled_device" },
	{ 0x822030b4, "input_set_abs_params" },
	{ 0x1c504203, "input_allocate_polled_device" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0xf789deff, "input_register_device" },
	{ 0xe134f8e2, "sparse_keymap_setup" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0x27a0b904, "platform_device_put" },
	{ 0x97b6982d, "platform_device_del" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0xe0c31db6, "platform_device_add" },
	{ 0xedafd5ca, "platform_device_alloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0xead0ca52, "acpi_bus_get_status" },
	{ 0x5a921311, "strncmp" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0xfe7843b, "input_event" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x903c69e0, "kobject_uevent" },
	{ 0x36bd7663, "backlight_force_update" },
	{ 0x5c310c55, "sparse_keymap_report_event" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0xd57f0cd9, "rfkill_alloc" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x91715312, "sprintf" },
	{ 0x27e1a049, "printk" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x373db350, "kstrtoint" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=input-polldev,sparse-keymap,video,rfkill";

MODULE_ALIAS("acpi*:ATK0100:*");
MODULE_ALIAS("acpi*:ATK0101:*");

MODULE_INFO(srcversion, "0D04693CFB903E03CCCA2C3");
MODULE_INFO(rhelversion, "8.0");
