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
	{ 0x7da4a994, "vmbus_driver_unregister" },
	{ 0x267dd1b1, "__vmbus_driver_register" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x52fa86ad, "hid_hw_start" },
	{ 0xa22b7d0a, "hid_open_report" },
	{ 0x43862d4a, "hid_add_device" },
	{ 0xc3db023b, "hid_allocate_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xdd915c3c, "vmbus_open" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x20a610c5, "vmbus_sendpacket" },
	{ 0x69acdf38, "memcpy" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x29361773, "complete" },
	{ 0x27e1a049, "printk" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x34c28e23, "pm_wakeup_dev_event" },
	{ 0x1a6f54b2, "hid_input_report" },
	{ 0x79a5d6a, "vmbus_recvpacket_raw" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x2830c41c, "hid_parse_report" },
	{ 0x1c602b69, "hid_destroy_device" },
	{ 0x86fae1be, "hid_hw_stop" },
	{ 0x97cfa8d1, "vmbus_close" },
	{ 0xe57587e0, "device_init_wakeup" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hv_vmbus";

MODULE_ALIAS("vmbus:9eb6a8cf4a5bc04cb98b8ba1a1f3f95a");

MODULE_INFO(srcversion, "B45A16FDC2929879C8DC154");
MODULE_INFO(rhelversion, "8.0");
