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
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xf4d92d49, "__wmi_driver_register" },
	{ 0xd1306c13, "blocking_notifier_chain_unregister" },
	{ 0xf011eecd, "set_required_buffer_size" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x8eef8246, "dell_wmi_get_hotfix" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x710c007, "wmi_driver_unregister" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0xfb578fc5, "memset" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x6add5c9a, "dmi_find_device" },
	{ 0x97b6982d, "platform_device_del" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xedafd5ca, "platform_device_alloc" },
	{ 0xe0c31db6, "platform_device_add" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xb3cfe19b, "wmidev_evaluate_method" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa3dcfa65, "dell_wmi_get_descriptor_valid" },
	{ 0xa75079d6, "dcdbas_smi_request" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd0c86c05, "put_device" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe8200fae, "blocking_notifier_call_chain" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x67d83e37, "blocking_notifier_chain_register" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x85ffabba, "get_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xa167d064, "dell_wmi_get_size" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x85f5e2aa, "krealloc" },
	{ 0x27a0b904, "platform_device_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wmi,dell-wmi-descriptor,dcdbas";

MODULE_ALIAS("dmi*:svn*DellInc.*:ct*8*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:ct*9*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:ct*10*:");
MODULE_ALIAS("dmi*:svn*DellComputerCorporation*:ct*8*:");

MODULE_INFO(srcversion, "E8BA5A12D9EE8F77A8582FE");
MODULE_INFO(rhelversion, "8.0");
