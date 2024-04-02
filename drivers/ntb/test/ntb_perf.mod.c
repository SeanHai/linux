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
	{ 0xc054ebe3, "param_ops_ulong" },
	{ 0x4fd5932f, "param_ops_byte" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x9a910d01, "simple_open" },
	{ 0x43cbbdfa, "ntb_unregister_client" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5ab3464d, "__ntb_register_client" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x27e1a049, "printk" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xcf73fd85, "ntb_default_port_number" },
	{ 0x51fe0544, "ntb_default_peer_port_count" },
	{ 0x3d01d297, "ntb_set_ctx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x494fd574, "ntb_default_peer_port_number" },
	{ 0xafcabbc1, "devm_ioremap_wc" },
	{ 0xc6651926, "debugfs_create_bool" },
	{ 0xbecaf3ee, "debugfs_create_u8" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0xb48340b, "ntb_link_event" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x695ee6a8, "dma_release_channel" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf9f42d13, "__dma_request_channel" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4b0c6f2d, "dmaengine_unmap_put" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xfaea2088, "dmaengine_get_unmap_data" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x55f5019b, "__kmalloc_node" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x10f1064d, "kstrtoint_from_user" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x5f2ebcf, "kstrtou8_from_user" },
	{ 0x317a8ad6, "flush_work" },
	{ 0x8598ebb1, "ntb_clear_ctx" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x121da905, "queue_work_on" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ntb";


MODULE_INFO(srcversion, "0674872C7443E001B0AA678");
MODULE_INFO(rhelversion, "8.0");
