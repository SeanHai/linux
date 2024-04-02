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
	{ 0x8e82828e, "iomem_resource" },
	{ 0xfc46ea03, "nvdimm_namespace_common_probe" },
	{ 0x8821bd78, "devm_create_dev_dax" },
	{ 0xbfa3e48b, "devm_nsio_disable" },
	{ 0xc1f98ded, "devm_memremap_pages" },
	{ 0x9f79eafd, "alloc_dax_region" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x8b373e28, "devm_nsio_enable" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x5e6f234f, "__nd_driver_register" },
	{ 0xc351790f, "driver_unregister" },
	{ 0xa782769d, "dax_region_put" },
	{ 0xdd57e2b5, "percpu_ref_exit" },
	{ 0x9e3f36ab, "devm_add_action" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfc8a6948, "nvdimm_setup_pfn" },
	{ 0xeb411599, "__devm_request_region" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3dfc436e, "percpu_ref_kill_and_confirm" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x60f9255, "to_nd_dax" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x2e2a42c9, "percpu_ref_init" },
	{ 0x29361773, "complete" },
	{ 0x3fa74627, "devm_kmalloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libnvdimm,device_dax";


MODULE_INFO(srcversion, "B1BF0FD94B5DFE1529A3926");
MODULE_INFO(rhelversion, "8.0");
