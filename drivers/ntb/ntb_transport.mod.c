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
	{ 0x421dfbb0, "bus_register" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x93ac2ae4, "driver_register" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x754d539c, "strlen" },
	{ 0x1db7706b, "__copy_user_nocache" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x4b0c6f2d, "dmaengine_unmap_put" },
	{ 0xd257960c, "device_register" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaea2088, "dmaengine_get_unmap_data" },
	{ 0xc351790f, "driver_unregister" },
	{ 0xd8ceb915, "dma_sync_wait" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x5a921311, "strncmp" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x43cbbdfa, "ntb_unregister_client" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x9a910d01, "simple_open" },
	{ 0xd831f284, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe6478472, "_dev_info" },
	{ 0xdcd000b8, "kmem_cache_alloc_node_trace" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd0c86c05, "put_device" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x51fe0544, "ntb_default_peer_port_count" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5ab3464d, "__ntb_register_client" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf9f42d13, "__dma_request_channel" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x85ffabba, "get_device" },
	{ 0x4fd5932f, "param_ops_byte" },
	{ 0x695ee6a8, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0x8598ebb1, "ntb_clear_ctx" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x55f5019b, "__kmalloc_node" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc054ebe3, "param_ops_ulong" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xb48340b, "ntb_link_event" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x3d01d297, "ntb_set_ctx" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ntb";


MODULE_INFO(srcversion, "C31709ADF13FB14D8FFB448");
MODULE_INFO(rhelversion, "8.0");
