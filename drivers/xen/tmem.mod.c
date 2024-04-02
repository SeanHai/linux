#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xeae75802, "cleancache_register_ops" },
	{ 0x27e1a049, "printk" },
	{ 0x4803ec5c, "frontswap_register_ops" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0x4b931968, "xen_features" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BE02D1C8E3E1A090EE28715");
MODULE_INFO(rhelversion, "8.0");
