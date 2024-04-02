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
	{ 0x2cec6038, "kobject_put" },
	{ 0xa967147b, "kset_create_and_add" },
	{ 0x421dfbb0, "bus_register" },
	{ 0x7076c8c2, "iommu_group_remove_device" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x93ac2ae4, "driver_register" },
	{ 0x6224110e, "iommu_group_add_device" },
	{ 0xdeaed2ea, "sysfs_create_files" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xe9ec6844, "kobject_del" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xc985b4ca, "kobject_create_and_add" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xd257960c, "device_register" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4cca4072, "class_compat_create_link" },
	{ 0x71c0e774, "kobject_init_and_add" },
	{ 0xd64d647, "class_compat_remove_link" },
	{ 0xc351790f, "driver_unregister" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xbb6d8463, "sysfs_remove_link" },
	{ 0xd831f284, "bus_unregister" },
	{ 0x6e7943ec, "iommu_group_id" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xaf6ae696, "kstrndup" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x5ef90e8e, "sysfs_create_link" },
	{ 0xe6478472, "_dev_info" },
	{ 0x570add14, "sysfs_remove_file_ns" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1ec97303, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x89485687, "iommu_group_put" },
	{ 0x85ffabba, "get_device" },
	{ 0x32c3cb4e, "class_compat_register" },
	{ 0x2d2a14f0, "sysfs_remove_files" },
	{ 0x150e16f4, "device_for_each_child" },
	{ 0x26fd227, "kset_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xb1f3f28a, "sysfs_create_groups" },
	{ 0x8d22bb58, "iommu_group_alloc" },
	{ 0x771f8491, "sysfs_remove_groups" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0xe5883bd9, "class_compat_unregister" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x1daf1f8d, "sysfs_create_file_ns" },
	{ 0xc35fe813, "device_remove_file_self" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "653D2B1898CB999A68939F8");
MODULE_INFO(rhelversion, "8.0");
