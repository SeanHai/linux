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
	{ 0xbadf500d, "pnp_unregister_driver" },
	{ 0x22c8110d, "pnp_register_driver" },
	{ 0x29361773, "complete" },
	{ 0x2c63e051, "apple_bl_register" },
	{ 0x8826c13b, "acpi_video_register" },
	{ 0x8eaf2a5f, "vga_switcheroo_unregister_handler" },
	{ 0x1344d7e6, "acpi_enable_gpe" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xa4faf62a, "acpi_disable_gpe" },
	{ 0x532ef074, "vga_switcheroo_register_handler" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb275a3a0, "bus_for_each_dev" },
	{ 0xb9d1be60, "pci_bus_type" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x72a6ba54, "backlight_device_unregister" },
	{ 0x78843f2d, "is_acpi_device_node" },
	{ 0xdab0f892, "apple_bl_unregister" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0xe45c1b14, "__release_region" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x5eba9410, "__request_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0xd5c7e620, "pnp_get_resource" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x27e1a049, "printk" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=apple_bl,video";

MODULE_ALIAS("pnp:dAPP000B*");
MODULE_ALIAS("acpi*:APP000B:*");

MODULE_INFO(srcversion, "F3A622389AAD062D846F5CB");
MODULE_INFO(rhelversion, "8.0");
