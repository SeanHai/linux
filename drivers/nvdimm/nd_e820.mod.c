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
	{ 0x114a3a5a, "nvdimm_bus_attribute_group" },
	{ 0x7cf7fd06, "nvdimm_pmem_region_create" },
	{ 0x60fa917c, "nvdimm_bus_register" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x835b0e3c, "nd_region_attribute_group" },
	{ 0x42dc7cd9, "nvdimm_bus_unregister" },
	{ 0x5f7763cc, "nd_device_attribute_group" },
	{ 0x638a9653, "memory_add_physaddr_to_nid" },
	{ 0xe57cffff, "walk_iomem_res_desc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1895b770, "platform_driver_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libnvdimm";


MODULE_INFO(srcversion, "2B99474C9016B0EB795DA22");
MODULE_INFO(rhelversion, "8.0");
