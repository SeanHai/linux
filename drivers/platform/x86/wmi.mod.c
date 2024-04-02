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
	{ 0x421dfbb0, "bus_register" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x93ac2ae4, "driver_register" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xdbcf041a, "acpi_install_address_space_handler" },
	{ 0x92e26bf, "acpi_remove_address_space_handler" },
	{ 0x5e87e75, "device_destroy" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xded6a415, "acpi_get_object_info" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x6bddef80, "misc_register" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x2e2b40d2, "strncat" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd75f1a32, "class_unregister" },
	{ 0xc351790f, "driver_unregister" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x2df52479, "device_create" },
	{ 0xcca62a76, "device_add" },
	{ 0x466c9ad3, "__class_register" },
	{ 0xd831f284, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xd0c86c05, "put_device" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x551be51f, "device_initialize" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x28318305, "snprintf" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0xc708f1fe, "ec_write" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x78843f2d, "is_acpi_device_node" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:PNP0C14:*");
MODULE_ALIAS("acpi*:pnp0c14:*");

MODULE_INFO(srcversion, "70AD54C210F5D529A15189C");
MODULE_INFO(rhelversion, "8.0");
