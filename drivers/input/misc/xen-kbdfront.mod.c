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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x6cbd6258, "xenbus_unregister_driver" },
	{ 0x77a37c5a, "__xenbus_register_frontend" },
	{ 0x85cb2c45, "xen_has_pv_devices" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x37914025, "xenbus_write" },
	{ 0x1e429171, "input_mt_init_slots" },
	{ 0x822030b4, "input_set_abs_params" },
	{ 0xd4c7656d, "input_set_capability" },
	{ 0xf789deff, "input_register_device" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x28318305, "snprintf" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x72308942, "xenbus_free_evtchn" },
	{ 0x89d5475b, "xenbus_dev_fatal" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x7b0cf8c, "xenbus_printf" },
	{ 0xe41534ce, "bind_evtchn_to_irqhandler" },
	{ 0x1dfddc0c, "xenbus_alloc_evtchn" },
	{ 0x57719632, "gnttab_grant_foreign_access" },
	{ 0x4b931968, "xen_features" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x2af30a80, "xenbus_switch_state" },
	{ 0x648b0c35, "xenbus_frontend_closed" },
	{ 0x27e1a049, "printk" },
	{ 0xa1654d34, "input_mt_sync_frame" },
	{ 0x480ba3d3, "input_mt_report_slot_state" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0xfe7843b, "input_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x372cfd6e, "gnttab_end_foreign_access" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4D28032E35F5E76E16CCE0B");
MODULE_INFO(rhelversion, "8.0");
