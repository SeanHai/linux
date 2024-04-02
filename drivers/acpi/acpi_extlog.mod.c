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
	{ 0xf2d7d87, "mce_unregister_decode_chain" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0x23d95205, "edac_set_report_status" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xe45c1b14, "__release_region" },
	{ 0x65a17a97, "acpi_os_unmap_iomem" },
	{ 0xc8e2198, "acpi_os_map_iomem" },
	{ 0x5eba9410, "__request_region" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0x4e91a072, "edac_get_report_status" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xdd18a993, "acpi_check_dsm" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xe4248980, "cper_estatus_print" },
	{ 0x27e1a049, "printk" },
	{ 0x28318305, "snprintf" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd1c2b463, "__tracepoint_extlog_mem_event" },
	{ 0x8df9dd10, "guid_null" },
	{ 0xcdb6adcc, "ras_userspace_consumers" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xa50bcff0, "x86_cpu_to_apicid" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D88EE35F27B1781A00D6755");
MODULE_INFO(rhelversion, "8.0");
