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
	{ 0xe2cffb14, "acpi_walk_resources" },
	{ 0x135d5c6a, "acpi_bus_register_driver" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x5eba9410, "__request_region" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x97868aef, "__kfifo_alloc" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xded6a415, "acpi_get_object_info" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x42c62921, "acpi_bus_unregister_driver" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0x4f55166f, "acpi_set_current_resources" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfe7843b, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x6bddef80, "misc_register" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xead0ca52, "acpi_bus_get_status" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xd57f0cd9, "rfkill_alloc" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0xedafd5ca, "platform_device_alloc" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xeb6b6275, "fasync_helper" },
	{ 0xe0c31db6, "platform_device_add" },
	{ 0x5a921311, "strncmp" },
	{ 0xd4c7656d, "input_set_capability" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x373db350, "kstrtoint" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf789deff, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0x85b5e625, "rfkill_set_states" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0xddad0649, "current_time" },
	{ 0xf2536a31, "kill_fasync" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x28318305, "snprintf" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xc708f1fe, "ec_write" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x72a6ba54, "backlight_device_unregister" },
	{ 0xc054ebe3, "param_ops_ulong" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x27a0b904, "platform_device_put" },
	{ 0xd55379f7, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rfkill,video";

MODULE_ALIAS("acpi*:SNY5001:*");
MODULE_ALIAS("acpi*:SNY6001:*");

MODULE_INFO(srcversion, "78CCC82FA5895ADCC7B5B57");
MODULE_INFO(rhelversion, "8.0");
