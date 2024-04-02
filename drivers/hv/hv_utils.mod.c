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
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xbf6269a1, "cn_add_callback" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x754d539c, "strlen" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x267dd1b1, "__vmbus_driver_register" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x91715312, "sprintf" },
	{ 0xff5a8cfe, "cn_del_callback" },
	{ 0x630630ad, "ptp_clock_unregister" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x6bddef80, "misc_register" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x46a417ca, "vmbus_proto_version" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xb8c8d6d0, "ptp_clock_register" },
	{ 0xdd915c3c, "vmbus_open" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa54dc022, "cn_netlink_send" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x56256e8a, "orderly_poweroff" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x62ef4465, "vmbus_recvpacket" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x97cfa8d1, "vmbus_close" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x914aa0b7, "hyperv_cs" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8fc8ce2b, "vmbus_prep_negotiate_resp" },
	{ 0x20a610c5, "vmbus_sendpacket" },
	{ 0x7a95e5ae, "do_settimeofday64" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x7da4a994, "vmbus_driver_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hv_vmbus";

MODULE_ALIAS("vmbus:31600b0e13523449818b38d90ced39db");
MODULE_ALIAS("vmbus:30e62795aed07b49adcee80ab0175caf");
MODULE_ALIAS("vmbus:394f16571591784eab55382f3bd5422d");
MODULE_ALIAS("vmbus:e7f4a0a9455a964db8278a841e8c03e6");
MODULE_ALIAS("vmbus:292efa3523ea364296ae3a6ebacba440");
MODULE_ALIAS("vmbus:e34bd134e4dec8419ae76b174977c192");

MODULE_INFO(srcversion, "6308027DBB03332622BAE03");
MODULE_INFO(rhelversion, "8.0");
