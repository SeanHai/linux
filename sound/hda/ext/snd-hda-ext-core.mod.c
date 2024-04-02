#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x93ac2ae4, "driver_register" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xba365c6, "snd_dma_alloc_pages" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x254a4333, "snd_hdac_device_exit" },
	{ 0xb8cec5b2, "snd_hda_bus_type" },
	{ 0x94a3f260, "snd_hdac_bus_init_cmd_io" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xc56aefa, "snd_hdac_bus_stop_cmd_io" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc351790f, "driver_unregister" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xb385349e, "snd_hdac_stream_assign" },
	{ 0xb191eb92, "snd_hdac_device_init" },
	{ 0x8e2065d4, "snd_hdac_device_unregister" },
	{ 0xe76be909, "snd_hdac_stream_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe3385a3b, "snd_hdac_bus_init" },
	{ 0xb75033ac, "snd_hdac_stream_stop" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xab22d6f3, "snd_hdac_device_register" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x24fdc108, "snd_hdac_bus_exit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x54643164, "snd_dma_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xa4defc16, "snd_hdac_bus_stop_chip" },
	{ 0x28318305, "snprintf" },
	{ 0x2c4c45c3, "snd_hdac_stream_release" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-hda-core";


MODULE_INFO(srcversion, "1968D5F11E0733EEE12A6BB");
MODULE_INFO(rhelversion, "8.0");
