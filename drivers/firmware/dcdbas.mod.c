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
	{ 0x20000329, "simple_strtoul" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x267df662, "smp_call_on_cpu" },
	{ 0x91715312, "sprintf" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x9e64fbfe, "rtc_cmos_read" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe6478472, "_dev_info" },
	{ 0x7040fff9, "rtc_lock" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4d924f20, "memremap" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x1895b770, "platform_driver_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A5439A39340466730016FFE");
MODULE_INFO(rhelversion, "8.0");
