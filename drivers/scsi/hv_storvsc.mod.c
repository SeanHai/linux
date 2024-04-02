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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf03b8cb9, "blk_queue_rq_timeout" },
	{ 0x81348cf2, "node_to_cpumask_map" },
	{ 0xdabdf67d, "vmbus_sendpacket_mpb_desc" },
	{ 0x7f5d9eb7, "__hv_pkt_iter_next" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0xf50eb3eb, "scsi_remove_device" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x267dd1b1, "__vmbus_driver_register" },
	{ 0x87b8798d, "sg_next" },
	{ 0x25899035, "vmbus_set_sc_create_callback" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xd15546f9, "blk_queue_virt_boundary" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf8bc917f, "hv_pkt_iter_close" },
	{ 0x257bfbc2, "scsi_rescan_device" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x46a417ca, "vmbus_proto_version" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7bdd5516, "scsi_scan_host" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdd915c3c, "vmbus_open" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x733dc065, "scsi_device_put" },
	{ 0x5bef5c60, "fc_release_transport" },
	{ 0x618911fc, "numa_node" },
	{ 0x408bd9c1, "scsi_add_device" },
	{ 0xaff06b0c, "scsi_host_get" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd78d3880, "fc_remote_port_delete" },
	{ 0x1000e51, "schedule" },
	{ 0xd2491c3c, "scsi_device_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8d6d3c23, "scsi_test_unit_ready" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x97cfa8d1, "vmbus_close" },
	{ 0x76d1f14a, "__scsi_iterate_devices" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x53facd95, "fc_eh_timed_out" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2144ff05, "hv_pkt_iter_first" },
	{ 0x20a610c5, "vmbus_sendpacket" },
	{ 0xb19bcd89, "fc_remove_host" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x85ce3360, "fc_remote_port_add" },
	{ 0x1b76347e, "cpumask_next_wrap" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x8f221a11, "fc_attach_transport" },
	{ 0xd3c4d6d4, "scsi_print_sense_hdr" },
	{ 0x7da4a994, "vmbus_driver_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hv_vmbus,scsi_transport_fc";

MODULE_ALIAS("vmbus:d96361baa104294db60572e2ffb1dc7f");
MODULE_ALIAS("vmbus:32264132cb86a2449b5c50d1417354f5");
MODULE_ALIAS("vmbus:4acc9b2f6900f34ab76b6fd0be528cda");

MODULE_INFO(srcversion, "1C6EAE9894CC05C42C34810");
MODULE_INFO(rhelversion, "8.0");
