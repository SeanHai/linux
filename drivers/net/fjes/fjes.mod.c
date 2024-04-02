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
	{ 0xe2cffb14, "acpi_walk_resources" },
	{ 0x135d5c6a, "acpi_bus_register_driver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5eba9410, "__request_region" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xc7f4b92, "single_open" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x985ca3e0, "single_release" },
	{ 0x41715c18, "seq_puts" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x572e5012, "acpi_bus_get_device" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x42c62921, "acpi_bus_unregister_driver" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x93815ea5, "trace_event_buffer_reserve" },
	{ 0x999e8297, "vfree" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x4b94a99b, "seq_read" },
	{ 0xfdc8c9b3, "bpf_trace_run3" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x4604d0c3, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x73c5f5f5, "trace_define_field" },
	{ 0xfb578fc5, "memset" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x62621c7e, "bpf_trace_run1" },
	{ 0xcaff94e5, "netif_tx_stop_all_queues" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x43d0701a, "free_netdev" },
	{ 0x8a7b630, "trace_event_reg" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa622d224, "dev_close" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x5182a0ba, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x276a9385, "trace_event_ignore_this_pid" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0x6717d4c9, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe45c1b14, "__release_region" },
	{ 0x9a5386e3, "ether_setup" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc1cf2d34, "event_triggers_call" },
	{ 0xf618e297, "bpf_trace_run2" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb7d8c32f, "trace_event_raw_init" },
	{ 0x8dc974cb, "dev_trans_start" },
	{ 0xedc03953, "iounmap" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x4e8c3a62, "trace_raw_output_prep" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0x11caddc7, "trace_seq_printf" },
	{ 0x509f625d, "consume_skb" },
	{ 0x3de37959, "vmalloc_to_page" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x8ee1b4e5, "__napi_alloc_skb" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x6839a855, "bpf_trace_run4" },
	{ 0xbcab0473, "acpi_device_hid" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xcfb4a296, "trace_print_array_seq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:PNP0C02:*");

MODULE_INFO(srcversion, "B6F1C39C76E2C8B0CA62D7F");
MODULE_INFO(rhelversion, "8.0");
